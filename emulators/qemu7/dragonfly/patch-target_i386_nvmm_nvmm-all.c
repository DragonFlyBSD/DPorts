Performance PATCH from dillon
----------------------------------------
<dillon> nvmm performance under qemu was terrible because qemu uses a global
         lock across those functions
<dillon> I adjusted the code to reduce the circumstances where the lock was
         being obtained
<dillon> it massively improved performance if I recall, when running qemu with
         a lot of cores

--- target/i386/nvmm/nvmm-all.c.orig	2022-12-14 16:28:45 UTC
+++ target/i386/nvmm/nvmm-all.c
@@ -405,12 +405,15 @@ nvmm_vcpu_pre_run(CPUState *cpu)
     uint8_t tpr;
     int ret;
 
-    qemu_mutex_lock_iothread();
-
     tpr = cpu_get_apic_tpr(x86_cpu->apic_state);
     if (tpr != qcpu->tpr) {
-        qcpu->tpr = tpr;
-        sync_tpr = true;
+	qemu_mutex_lock_iothread();
+	tpr = cpu_get_apic_tpr(x86_cpu->apic_state);
+	if (tpr != qcpu->tpr) {
+	    qcpu->tpr = tpr;
+	    sync_tpr = true;
+	}
+	qemu_mutex_unlock_iothread();
     }
 
     /*
@@ -422,29 +425,36 @@ nvmm_vcpu_pre_run(CPUState *cpu)
     }
 
     if (!has_event && (cpu->interrupt_request & CPU_INTERRUPT_NMI)) {
+	qemu_mutex_lock_iothread();
         if (nvmm_can_take_nmi(cpu)) {
             cpu->interrupt_request &= ~CPU_INTERRUPT_NMI;
             event->type = NVMM_VCPU_EVENT_INTR;
             event->vector = 2;
             has_event = true;
         }
+	qemu_mutex_unlock_iothread();
     }
 
     if (!has_event && (cpu->interrupt_request & CPU_INTERRUPT_HARD)) {
+	qemu_mutex_lock_iothread();
         if (nvmm_can_take_int(cpu)) {
             cpu->interrupt_request &= ~CPU_INTERRUPT_HARD;
             event->type = NVMM_VCPU_EVENT_INTR;
             event->vector = cpu_get_pic_interrupt(env);
             has_event = true;
         }
+	qemu_mutex_unlock_iothread();
     }
 
     /* Don't want SMIs. */
     if (cpu->interrupt_request & CPU_INTERRUPT_SMI) {
+	qemu_mutex_lock_iothread();
         cpu->interrupt_request &= ~CPU_INTERRUPT_SMI;
+	qemu_mutex_unlock_iothread();
     }
 
     if (sync_tpr) {
+	qemu_mutex_lock_iothread();
         ret = nvmm_vcpu_getstate(mach, vcpu, NVMM_X64_STATE_CRS);
         if (ret == -1) {
             error_report("NVMM: Failed to get CPU state,"
@@ -458,6 +468,7 @@ nvmm_vcpu_pre_run(CPUState *cpu)
             error_report("NVMM: Failed to set CPU state,"
                 " error=%d", errno);
         }
+	qemu_mutex_unlock_iothread();
     }
 
     if (has_event) {
@@ -467,8 +478,6 @@ nvmm_vcpu_pre_run(CPUState *cpu)
                 " error=%d", errno);
         }
     }
-
-    qemu_mutex_unlock_iothread();
 }
 
 /*
