# Created by: Pawel Worach
# $FreeBSD: head/x11-fonts/font-util/Makefile 473808 2018-07-03 09:07:35Z amdmi3 $

PORTNAME=	font-util
PORTVERSION=	1.3.1
CATEGORIES=	x11-fonts
MASTER_SITES=	XORG/individual/font

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Create an index of X font files in a directory

LICENSE=	BSD2CLAUSE MIT
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pathfix tar:bzip2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-fontrootdir=${PREFIX}/share/fonts

.include <bsd.port.mk>
