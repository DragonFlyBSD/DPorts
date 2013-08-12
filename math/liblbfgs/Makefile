# Created by: Hung-Yi Chen <gaod@hychen.org>
# $FreeBSD: math/liblbfgs/Makefile 322617 2013-07-10 06:14:32Z bapt $

PORTNAME=	liblbfgs
PORTVERSION=	1.10
CATEGORIES=	math
MASTER_SITES=	http://cloud.github.com/downloads/chokkan/liblbfgs/

MAINTAINER=	gaod@hychen.org
COMMENT=	Library of Limited-memory Broyden-Fletcher-Goldfarb-Shanno

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	autoconf:env

OPTIONS_DEFINE=	OPTIMIZED DOCS
OPTIMIZED_DESC=	SSE2 optimization routines

.include <bsd.port.options.mk>

# Enable/disable compilation optimizations.
.if ${PORT_OPTIONS:MOPTIMIZED}
CONFIGURE_ARGS+=	--enable-sse2
.endif

PLIST_FILES=	lib/liblbfgs-1.10.so.0.0 lib/liblbfgs.a lib//liblbfgs.la \
		lib/liblbfgs.so.0.0 include/lbfgs.h

PORTDOCS=	README INSTALL COPYING AUTHORS ChangeLog NEWS

post-patch:
.if !${PORT_OPTIONS:MDOCS}
	@${REINPLACE_CMD} -e 's/install-data-am$$//' ${WRKSRC}/Makefile.in
.endif

.include <bsd.port.mk>
