PORTNAME=	expiretable
PORTVERSION=	0.6
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	http://expiretable.fnord.se/

MAINTAINER=	cris@gufi.org
COMMENT=	Utility to remove entries from the pf(4) table based on their age
WWW=		https://expiretable.fnord.se/

USE_RC_SUBR=	expiretable

CFLAGS= -D_KERNEL_STRUCTURES
dfly-patch:
	${REINPLACE_CMD} -e 's@<net/pfvar.h>@<net/pf/pfvar.h>@g' \
		${WRKSRC}/ioctl_helpers.h

.include <bsd.port.mk>
