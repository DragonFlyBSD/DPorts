#pragma once
#include <string>
#include <vector>

#include "edit_distance.h"
#include "treebank.h"

namespace docling {

/**
 * Manager for computing text metrics such as tokenization and edit distance.
 */
class TextManager {
public:
  /**
   * @param level Log level. One of "info", "warning", "error", "fatal". Defaults to "info".
   */
  TextManager(const std::string &level = "info");

  /**
   * Tokenize text according to the Tree Bank Tokenizer.
   *
   * @param text               The input text to tokenize.
   * @param convert_parentheses Convert all parentheses.
   * @return                   List of tokens.
   */
  std::vector<std::string> tokenize(const std::string &text, bool convert_parentheses);

  /**
   * Calculate the normalized edit distance between two token lists.
   *
   * @param tokens_a The first list of tokens.
   * @param tokens_b The second list of tokens.
   * @return         Normalized edit distance in [0, 1].
   */
  double edit_distance(const std::vector<std::string> &tokens_a,
                       const std::vector<std::string> &tokens_b);

private:
  TreeBankTokenizer treebank_tokenizer_;
  EditDistanceCalculator ed_calculator_;
};

} // namespace docling
