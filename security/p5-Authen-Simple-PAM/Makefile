# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: security/p5-Authen-Simple-PAM/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Authen-Simple-PAM
PORTVERSION=	0.2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple PAM authentication

BUILD_DEPENDS=	p5-Authen-Simple>=0:${PORTSDIR}/security/p5-Authen-Simple \
		p5-Authen-PAM>=0:${PORTSDIR}/security/p5-Authen-PAM
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Authen::Simple::PAM.3

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
