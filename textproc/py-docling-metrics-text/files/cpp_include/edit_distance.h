#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace docling {

using Word = uint64_t;

/**
 * Computes token-level edit distance using the Myers bit-vector algorithm.
 */
class EditDistanceCalculator {
public:
  /**
   * @param memory_safe When true, throws if the Peq table would exceed available system RAM.
   */
  EditDistanceCalculator(bool memory_safe = true);

  /**
   * Normalized edit distance: raw distance divided by max(|query|, |target|).
   * Returns 0.0 when both sequences are empty.
   *
   * @param query  The query token sequence.
   * @param target The target token sequence.
   * @return       Normalized edit distance in [0, 1].
   */
  double edit_distance(const std::vector<std::string> &query,
                       const std::vector<std::string> &target);

private:
  /**
   * Myers bit-vector edit distance on token sequences (Needleman-Wunsch / global).
   * Returns the raw edit distance (number of insertions, deletions, substitutions).
   *
   * @param query  The query token sequence.
   * @param target The target token sequence.
   * @return       Raw edit distance.
   */
  int edit_distance_raw(const std::vector<std::string> &query,
                        const std::vector<std::string> &target);

  // Processes one block of one column of the Myers bit-vector DP.
  inline int calculate_block(Word Pv, Word Mv, Word Eq, int hin, Word &PvOut, Word &MvOut);

  inline int ceil_div(int x, int y) { return x % y ? x / y + 1 : x / y; }

  /**
   * Checks whether the system has enough RAM to allocate the Peq table.
   *
   * @param token_map_size Number of distinct tokens.
   * @param num_of_blocks  Number of bit-vector blocks (ceil(|query| / WORD_SIZE)).
   * @return               True if the Peq table fits in system RAM, false otherwise.
   */
  bool sanity_checks(size_t token_map_size, size_t num_of_blocks);

private:
  bool memory_safe_;
  uint64_t system_gb_;
};

} // namespace docling
