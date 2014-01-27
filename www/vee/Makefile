# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: www/vee/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	vee
DISTVERSION=	0.9.9-zeta
CATEGORIES=	www
MASTER_SITES=	http://www.0x743.com/vee/ CENKES
# Also here: http://code.google.com/p/vee/
EXTRACT_SUFX=	.tgz

MAINTAINER=	estrabd@gmail.com
COMMENT=	Tiny CLI blogging tool

NO_BUILD=	yes
PLIST_FILES=	bin/${PORTNAME}

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -Ee 's|^function ([[:graph:]]+)|\1 ()|' ${WRKSRC}/bin/${PORTNAME}

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/bin/${PORTNAME} ${PREFIX}/bin/

.include <bsd.port.mk>
