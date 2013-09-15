# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-Regexp-Common-profanity_us/Makefile 326945 2013-09-11 07:12:18Z az $

PORTNAME=	Regexp-Common-profanity_us
PORTVERSION=	4.112150
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Provide regexes for U.S. profanity

BUILD_DEPENDS=	p5-Regexp-Common>=0:${PORTSDIR}/textproc/p5-Regexp-Common
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Regexp::Common::profanity_us.3 \
		Regexp::Profanity::US.3

.include <bsd.port.mk>
