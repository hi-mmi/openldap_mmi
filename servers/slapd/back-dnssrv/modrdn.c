/* modrdn.c - DNS SRV backend modrdn function */
/* $OpenLDAP$ */
/*
 * Copyright 2000 The OpenLDAP Foundation, All Rights Reserved.
 * COPYING RESTRICTIONS APPLY, see COPYRIGHT file
 */

#include "portable.h"

#include <stdio.h>

#include <ac/socket.h>
#include <ac/string.h>

#include "slap.h"
#include "back-dnssrv.h"

int
dnssrv_back_modrdn(
    Backend	*be,
    Connection	*conn,
    Operation	*op,
    char	*dn,
    char	*ndn,
    char	*newrdn,
    int		deleteoldrdn,
    char	*newSuperior
)
{
	return dnssrv_back_request( be, conn, op, dn, ndn );
}
