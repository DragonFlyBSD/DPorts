# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: mail/p5-POE-Component-Client-SMTP/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	POE-Component-Client-SMTP
PORTVERSION=	0.22
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SMTP client POE component

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-POE-Filter-Transparent-SMTP>=0:${PORTSDIR}/mail/p5-POE-Filter-Transparent-SMTP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		POE::Component::Client::SMTP.3

NO_STAGE=	yes
.include <bsd.port.mk>
