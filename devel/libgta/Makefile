# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: devel/libgta/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	libgta
PORTVERSION=	1.0.2
CATEGORIES=	devel
MASTER_SITES=	SAVANNAH/gta

MAINTAINER=	coder@tuxfamily.org
COMMENT=	Libgta is a portable library that implements the GTA file format

OPTIONS_DEFINE=	DOCS

USE_XZ=		yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USES=	pathfix
USE_LDCONFIG=	yes

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-patch:
.if empty(PORT_OPTIONS:MDOCS)
	@${REINPLACE_CMD} -e '/^SUBDIRS = / s|doc||' ${WRKSRC}/Makefile.in
.endif

regression-test test: build
	cd ${WRKSR}/ && ${SETENV} ${MAKE_ENV} ${MAKE} check

.include <bsd.port.pre.mk>

.if (${OSVERSION} >= 900000 && ${OSVERSION} < 900012) || ${OSVERSION} < 800505
LIB_DEPENDS+=		lzma:${PORTSDIR}/archivers/xz
.endif

.include <bsd.port.post.mk>
