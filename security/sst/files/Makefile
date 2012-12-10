# $FreeBSD: ports/security/sst/files/Makefile,v 1.2 2012/11/17 06:01:21 svnexp Exp $

PROG=sst

BINDIR=${PREFIX}/sbin
MANDIR=${PREFIX}/man/man

CFLAGS+=	-DCONFDIR='"${OPENSSLDIR}"' -DCERTF='"certs/sst.pem"' \
		-DNETCAT='"${PREFIX}/bin/nc"' -I${OPENSSLINC}

LDADD+=	-L${OPENSSLLIB} -lssl -lcrypto

.include <bsd.prog.mk>
