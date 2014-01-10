# $FreeBSD: x11-themes/emerald-themes/Makefile 338920 2014-01-06 18:51:30Z antoine $

PORTNAME=	emerald-themes
PORTVERSION=	0.6.0
CATEGORIES=	x11-themes
MASTER_SITES=	http://cgit.compiz.org/fusion/decorators/emerald-themes/snapshot/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Themes for the Emerald Window Decorator

BUILD_DEPENDS=	bash:${PORTSDIR}/shells/bash

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USES=		gmake shebangfix
USE_AUTOTOOLS=	autoconf:env automake:env aclocal:env autoheader:env
SHEBANG_FILES=	themes/import.sh

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

pre-configure:
	@cd ${WRKSRC} && ./autogen.sh

.include <bsd.port.mk>
