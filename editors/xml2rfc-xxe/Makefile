# Created by: Bill Fenner
# $FreeBSD: editors/xml2rfc-xxe/Makefile 330485 2013-10-16 08:17:30Z marino $

PORTNAME=	xml2rfc-xxe
PORTVERSION=	0.8.0
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMESUFFIX=	${XXE_VERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	xml2rfc configuration for XMLMind XML editor

RUN_DEPENDS=	xxe:${PORTSDIR}/editors/xxe

DEPRECATED=	Depends on editors/xxe, which is due to be removed due to lack of maintainer
EXPIRATION_DATE=	2013-11-15

USE_ZIP=	YES
NO_BUILD=	YES
WRKSRC=		${WRKDIR}/xml2rfc

PLIST_SUB=	XXE_DIR=${XXE_DIR}

NO_STAGE=	yes
post-extract:
	@${RM} ${WRKSRC}/svn-commit.tmp

do-install:
	@cd ${WRKDIR} && tar cf - xml2rfc | \
		tar -C ${PREFIX}/lib/${XXE_DIR}/addon -xf -

.include "../xxe/Makefile.inc"

.include <bsd.port.mk>
