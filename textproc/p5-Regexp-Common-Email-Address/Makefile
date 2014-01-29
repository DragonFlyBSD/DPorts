# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-Regexp-Common-Email-Address/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Regexp-Common-Email-Address
PORTVERSION=	1.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Regex pattern for Email Addresses

BUILD_DEPENDS=	p5-Email-Address>=0:${PORTSDIR}/mail/p5-Email-Address \
		p5-Regexp-Common>=0:${PORTSDIR}/textproc/p5-Regexp-Common
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
