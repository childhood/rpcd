/*
 * Copyright (C) 2009-2010 ASN Sp. z o.o.
 * Author: Pawel Foremski <pjf@asn.pl>
 * All rights reserved
 */

#ifndef _SH_H_
#define _SH_H_

bool sh_init(struct mod *mod);
bool sh_check(struct req *req, mmatic *mm);
bool sh_handle(struct req *req, mmatic *mm);

extern struct api sh_api;

#endif