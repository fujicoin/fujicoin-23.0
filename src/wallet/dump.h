// Copyright (c) 2020 The Fujicoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FUJICOIN_WALLET_DUMP_H
#define FUJICOIN_WALLET_DUMP_H

#include <fs.h>

#include <string>
#include <vector>

struct bilingual_str;

namespace wallet {
class CWallet;
bool DumpWallet(CWallet& wallet, bilingual_str& error);
bool CreateFromDump(const std::string& name, const fs::path& wallet_path, bilingual_str& error, std::vector<bilingual_str>& warnings);
} // namespace wallet

#endif // FUJICOIN_WALLET_DUMP_H
