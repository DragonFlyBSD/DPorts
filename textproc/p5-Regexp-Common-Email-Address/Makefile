# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-Regexp-Common-Email-Address/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		Regexp::Common::Email::Address.3

.include <bsd.port.mk>
