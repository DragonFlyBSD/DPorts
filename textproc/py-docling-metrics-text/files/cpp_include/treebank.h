#pragma once
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "re2/re2.h"

namespace docling {

/**
 * Tokenizer based on the Tree Bank tokenization rules.
 */
class TreeBankTokenizer {
public:
  TreeBankTokenizer();

  /**
   * Tokenize the input text.
   *
   * @param text                The input text to tokenize.
   * @param convert_parentheses When true, convert parentheses to PTB bracket tokens.
   * @return                    List of tokens.
   */
  std::vector<std::string> tokenize(const std::string &text, bool convert_parentheses = false);

private:
  // Pattern pairs: (compiled_regex, replacement)
  std::vector<std::pair<std::unique_ptr<re2::RE2>, std::string>> starting_quotes_;
  std::vector<std::pair<std::unique_ptr<re2::RE2>, std::string>> punctuation_;
  std::vector<std::pair<std::unique_ptr<re2::RE2>, std::string>> ending_quotes_;
  std::vector<std::pair<std::unique_ptr<re2::RE2>, std::string>> convert_parentheses_;

  std::pair<std::unique_ptr<re2::RE2>, std::string> parens_brackets_;
  std::pair<std::unique_ptr<re2::RE2>, std::string> double_dashes_;

  // Contraction patterns (compiled regex, replacement is fixed)
  std::vector<std::unique_ptr<re2::RE2>> contractions2_;
  std::vector<std::unique_ptr<re2::RE2>> contractions3_;
};

} // namespace docling
