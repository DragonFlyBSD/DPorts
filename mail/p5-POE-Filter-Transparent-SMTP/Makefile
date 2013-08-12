# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: mail/p5-POE-Filter-Transparent-SMTP/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	POE-Filter-Transparent-SMTP
PORTVERSION=	0.2
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0+$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SMTP transparency POE filter

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		POE::Filter::Transparent::SMTP.3

.include <bsd.port.mk>
