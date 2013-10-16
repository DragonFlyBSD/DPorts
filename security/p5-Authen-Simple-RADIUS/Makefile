# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: security/p5-Authen-Simple-RADIUS/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Authen-Simple-RADIUS
PORTVERSION=	0.1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple RADIUS authentication

BUILD_DEPENDS=	p5-Authen-Simple>=0:${PORTSDIR}/security/p5-Authen-Simple \
		p5-Authen-Radius>=0:${PORTSDIR}/security/p5-Authen-Radius
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Authen::Simple::RADIUS.3

USES=		perl5
USE_PERL5=	modbuild

NO_STAGE=	yes
.include <bsd.port.mk>
