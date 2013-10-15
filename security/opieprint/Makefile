# Created by: mharo@FreeBSD.org
# $FreeBSD: security/opieprint/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	opieprint
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://www.inner.net/pub/opie/contrib/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.gz

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Output postscript with 100 OPIE passwords credit card sized

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
USES=		perl5
USE_PERL5=	run

PLIST_FILES=	bin/opieprint

EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=	#
EXTRACT_AFTER_ARGS=	> ${WRKSRC}/${PORTNAME}

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's,/usr/local/bin/perl,${PERL},' ${WRKSRC}/opieprint

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/opieprint ${PREFIX}/bin

.include <bsd.port.mk>
