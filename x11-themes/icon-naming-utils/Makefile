# Created by: Phillip Neumann <pneumann@gmail.com>
# $FreeBSD: x11-themes/icon-naming-utils/Makefile 314736 2013-03-20 14:26:46Z makc $

PORTNAME=	icon-naming-utils
PORTVERSION=	0.8.90
PORTREVISION=	1
CATEGORIES=	x11-themes
MASTER_SITES=	GENTOO
MASTER_SITE_SUBDIR=	distfiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utilities of the Tango project

BUILD_DEPENDS=	p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple
RUN_DEPENDS=	p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple

USE_PERL5=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_PKGCONFIG=	build
USES+=		pathfix

.include <bsd.port.mk>
