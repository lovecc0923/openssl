/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_OSSL_STOREERR_H
# define HEADER_OSSL_STOREERR_H

# ifdef  __cplusplus
extern "C" {
# endif
int ERR_load_OSSL_STORE_strings(void);
# ifdef  __cplusplus
}
# endif

/*
 * OSSL_STORE function codes.
 */
# define OSSL_STORE_F_FILE_GET_PASS                       118
# define OSSL_STORE_F_FILE_LOAD                           119
# define OSSL_STORE_F_FILE_LOAD_TRY_DECODE                124
# define OSSL_STORE_F_FILE_NAME_TO_URI                    126
# define OSSL_STORE_F_FILE_OPEN                           120
# define OSSL_STORE_F_OSSL_STORE_GET0_LOADER_INT          100
# define OSSL_STORE_F_OSSL_STORE_INFO_GET1_CERT           101
# define OSSL_STORE_F_OSSL_STORE_INFO_GET1_CRL            102
# define OSSL_STORE_F_OSSL_STORE_INFO_GET1_NAME           103
# define OSSL_STORE_F_OSSL_STORE_INFO_GET1_NAME_DESCRIPTION 135
# define OSSL_STORE_F_OSSL_STORE_INFO_GET1_PARAMS         104
# define OSSL_STORE_F_OSSL_STORE_INFO_GET1_PKEY           105
# define OSSL_STORE_F_OSSL_STORE_INFO_NEW_CERT            106
# define OSSL_STORE_F_OSSL_STORE_INFO_NEW_CRL             107
# define OSSL_STORE_F_OSSL_STORE_INFO_NEW_EMBEDDED        123
# define OSSL_STORE_F_OSSL_STORE_INFO_NEW_NAME            109
# define OSSL_STORE_F_OSSL_STORE_INFO_NEW_PARAMS          110
# define OSSL_STORE_F_OSSL_STORE_INFO_NEW_PKEY            111
# define OSSL_STORE_F_OSSL_STORE_INFO_SET0_NAME_DESCRIPTION 134
# define OSSL_STORE_F_OSSL_STORE_INIT_ONCE                112
# define OSSL_STORE_F_OSSL_STORE_LOADER_NEW               113
# define OSSL_STORE_F_OSSL_STORE_OPEN                     114
# define OSSL_STORE_F_OSSL_STORE_OPEN_INT                 115
# define OSSL_STORE_F_OSSL_STORE_REGISTER_LOADER_INT      117
# define OSSL_STORE_F_OSSL_STORE_UNREGISTER_LOADER_INT    116
# define OSSL_STORE_F_TRY_DECODE_PARAMS                   121
# define OSSL_STORE_F_TRY_DECODE_PKCS12                   122
# define OSSL_STORE_F_TRY_DECODE_PKCS8ENCRYPTED           125

/*
 * OSSL_STORE reason codes.
 */
# define OSSL_STORE_R_AMBIGUOUS_CONTENT_TYPE              107
# define OSSL_STORE_R_BAD_PASSWORD_READ                   115
# define OSSL_STORE_R_ERROR_VERIFYING_PKCS12_MAC          113
# define OSSL_STORE_R_INVALID_SCHEME                      106
# define OSSL_STORE_R_IS_NOT_A                            112
# define OSSL_STORE_R_NOT_A_CERTIFICATE                   100
# define OSSL_STORE_R_NOT_A_CRL                           101
# define OSSL_STORE_R_NOT_A_KEY                           102
# define OSSL_STORE_R_NOT_A_NAME                          103
# define OSSL_STORE_R_NOT_PARAMETERS                      104
# define OSSL_STORE_R_PASSPHRASE_CALLBACK_ERROR           114
# define OSSL_STORE_R_PATH_MUST_BE_ABSOLUTE               108
# define OSSL_STORE_R_UI_PROCESS_INTERRUPTED_OR_CANCELLED 109
# define OSSL_STORE_R_UNREGISTERED_SCHEME                 105
# define OSSL_STORE_R_UNSUPPORTED_CONTENT_TYPE            110
# define OSSL_STORE_R_URI_AUTHORITY_UNSUPPORED            111

#endif
