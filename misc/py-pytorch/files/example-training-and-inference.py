import torch
import torch.nn as nn
import torch.optim as optim
from torch.utils.data import DataLoader, TensorDataset

# =====================================================================
# 1. SETUP HARDWARE ACCELERATION
# =====================================================================
# Automatically utilize available GPU hardware (CUDA/MPS) or fallback to CPU
if torch.cuda.is_available():
    device = torch.device("cuda")
elif torch.backends.mps.is_available():
    device = torch.device("mps")
else:
    device = torch.device("cpu")
print(f"Using device: {device}")

# =====================================================================
# 2. DATA GENERATION & PREPARATION
# =====================================================================
# Create synthetic training data: 1000 samples, 5 features each
X_raw = torch.randn(1000, 5)
# Target binary labels (0 or 1) based on a simple mathematical rule
Y_raw = (X_raw.sum(dim=1) > 0).float().unsqueeze(1)

# Package into PyTorch structured data structures
dataset = TensorDataset(X_raw, Y_raw)
dataloader = DataLoader(dataset, batch_size=32, shuffle=True)

# =====================================================================
# 3. DEFINE MODEL ARCHITECTURE
# =====================================================================
class BinaryClassifier(nn.Module):
    def __init__(self, input_dim):
        super(BinaryClassifier, self).__init__()
        # Define sequential linear layers with non-linear activation
        self.network = nn.Sequential(
            nn.Linear(input_dim, 16),
            nn.ReLU(),
            nn.Linear(16, 8),
            nn.ReLU(),
            nn.Linear(8, 1),
            nn.Sigmoid() # Keeps outputs strictly compressed between 0 and 1
        )
        
    def forward(self, x):
        return self.network(x)

# Instantiate network and push its parameters to the active hardware
model = BinaryClassifier(input_dim=5).to(device)

# =====================================================================
# 4. DEFINE LOSS & OPTIMIZER
# =====================================================================
criterion = nn.BCELoss() # Binary Cross Entropy Loss for 0/1 classification
optimizer = optim.Adam(model.parameters(), lr=0.005)

# =====================================================================
# 5. EXECUTE THE TRAINING LOOP
# =====================================================================
model.train() # Explicitly set model to training mode
epochs = 20

print("\n--- Starting Training ---")
for epoch in range(epochs):
    epoch_loss = 0.0
    for batch_X, batch_Y in dataloader:
        # Move mini-batches to the active hardware device
        batch_X, batch_Y = batch_X.to(device), batch_Y.to(device)
        
        # Forward pass: Compute predictions
        predictions = model(batch_X)
        loss = criterion(predictions, batch_Y)
        
        # Backward pass: Compute parameter gradients
        optimizer.zero_grad() # Prevent gradient accumulation from past steps
        loss.backward()
        optimizer.step()      # Update model parameters based on gradients
        
        epoch_loss += loss.item() * batch_X.size(0)
        
    total_epoch_loss = epoch_loss / len(dataloader.dataset)
    if (epoch + 1) % 5 == 0:
        print(f"Epoch {epoch+1:02d}/{epochs} | Average Loss: {total_epoch_loss:.4f}")

# =====================================================================
# 6. SAVE TRAINED WEIGHTS
# =====================================================================
# Always save the state_dict (weights/biases) rather than the whole object
model_path = "binary_classifier_model.pth"
torch.save(model.state_dict(), model_path)
print(f"\nModel parameters saved successfully to: {model_path}")

# =====================================================================
# 7. PRODUCTION INFERENCE
# =====================================================================
print("\n--- Starting Inference ---")

# Step A: Re-instantiate the model architecture blueprint
inference_model = BinaryClassifier(input_dim=5)

# Step B: Load the saved state dictionary into the model blueprint
inference_model.load_state_dict(torch.load(model_path, map_location=device))
inference_model.to(device)

# Step C: Crucial step to freeze batchnorm/dropout operations
inference_model.eval()

# Create completely new, unseen production data (3 samples, 5 features)
new_data = torch.randn(3, 5).to(device)

# Step D: Disable the gradient calculation engine to maximize performance
with torch.no_grad():
    raw_probabilities = inference_model(new_data)
    # Convert sigmoid output probabilities to concrete 0 or 1 boundaries
    predicted_classes = (raw_probabilities >= 0.5).int()

# Display predictions
for i in range(len(new_data)):
    prob = raw_probabilities[i].item()
    pred_class = predicted_classes[i].item()
    print(f"Input Sample {i+1} | Probability: {prob:.4f} -> Predicted Class: {pred_class}")

