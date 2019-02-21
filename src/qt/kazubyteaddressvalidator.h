// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KBYTECOIN_QT_KBYTECOINADDRESSVALIDATOR_H
#define KBYTECOIN_QT_KBYTECOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class KazuByteAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KazuByteAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** KazuByte address widget validator, checks for a valid kazubyte address.
 */
class KazuByteAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KazuByteAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // KBYTECOIN_QT_KBYTECOINADDRESSVALIDATOR_H
