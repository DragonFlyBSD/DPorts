# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Class-Accessor-Installer/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-Accessor-Installer
PORTVERSION=	1.100880
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
#MASTER_SITE_SUBDIR=
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Install an accessor subroutine

BUILD_DEPENDS=	p5-Sub-Name>=0:${PORTSDIR}/devel/p5-Sub-Name \
		p5-UNIVERSAL-require>=0:${PORTSDIR}/devel/p5-UNIVERSAL-require
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Accessor::Installer.3

NO_STAGE=	yes
.include <bsd.port.mk>
