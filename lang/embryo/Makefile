# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: ports/lang/embryo/Makefile,v 1.36 2012/11/17 05:58:49 svnexp Exp $

PORTNAME=	embryo
DISTVERSION=	1.1.0
PORTEPOCH=	2
CATEGORIES=	lang enlightenment
MASTER_SITES=	http://download.enlightenment.org/releases/ \
		http://files.roorback.net/e17/2011-12-02/base/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	A C like scripting language used in Enlightenment

LICENSE=	BSD

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	eina libtool_hack librt_hack
USE_GNOME=	gnomehack pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
