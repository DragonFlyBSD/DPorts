# $FreeBSD: security/sst/files/Makefile 340722 2014-01-22 17:00:46Z mat $

PROG=sst

BINDIR=${PREFIX}/sbin
MANDIR=${PREFIX}/man/man

CFLAGS+=	-DCONFDIR='"${OPENSSLDIR}"' -DCERTF='"certs/sst.pem"' \
		-I${OPENSSLINC}
.if exists(/usr/bin/nc)
CFLAGS+=	-DNETCAT='"/usr/bin/nc"' 
.else
CFLAGS+=	-DNETCAT='"${LOCALBASE}/bin/netcat"'
.endif
LDADD+=	-L${OPENSSLLIB} -lssl -lcrypto

.include <bsd.prog.mk>
