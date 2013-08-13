# Created by: Chia-liang Kao <clkao@clkao.org>
# $FreeBSD: devel/p5-Cdk/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	Cdk
PORTVERSION=	5.20120324
CATEGORIES=	devel perl5
MASTER_SITES=	ftp://dickey.his.com/cdk/
PKGNAMEPREFIX=	p5-
DISTNAME=	cdk-perl-${PORTVERSION:C,^[0-9]\.,,}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module for Curses Development Kit

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	cdk:${PORTSDIR}/devel/cdk

USES=		perl5
GNU_CONFIGURE=	yes
INSTALL_TARGET=	pure_install

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
