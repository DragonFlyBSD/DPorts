# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Sub-Installer/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Sub-Installer
PORTVERSION=	0.0.3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Sub::Installer - A clean way to (re)install package subroutines

BUILD_DEPENDS=	p5-version>0:${PORTSDIR}/devel/p5-version
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Sub::Installer.3

NO_STAGE=	yes
.include <bsd.port.mk>
