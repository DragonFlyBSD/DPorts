# Created by: ballen
# $FreeBSD: ports/biology/phyml/Makefile,v 1.6 2013/02/04 13:32:33 svnexp Exp $

PORTNAME=	phyml
PORTVERSION=	20121109
CATEGORIES=	biology
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${PORTNAME}-20120412
DIST_SUBDIR=	${PORTNAME}

PATCH_SITES=	${MASTER_SITES}
PATCHFILES=	${PORTVERSION}.patch
PATCH_DIST_STRIP=	-p4

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple, fast, and accurate algorithm to estimate large phylogenies

LICENSE=	GPLv2

PATCH_WRKSRC=	${WRKSRC}/src

USE_AUTOTOOLS=	aclocal autoheader automake autoconf
AUTOMAKE_ARGS=	--add-missing
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/phyml

post-patch:
	@${REINPLACE_CMD} -e \
		'/^AC_INIT/s|,esyscmd.*,|,[${PORTVERSION}],| ; \
		 s|-O2 -msse|$${CFLAGS}|' ${WRKSRC}/configure.ac

.include <bsd.port.mk>
