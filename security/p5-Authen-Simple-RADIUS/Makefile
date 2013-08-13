# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: security/p5-Authen-Simple-RADIUS/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
