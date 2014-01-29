# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-Regexp-Log-Common/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Regexp-Log-Common
PORTVERSION=	0.08
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Regexp::Log::Common, a parser for the Common Log Format

LICENSE=	ART20

RUN_DEPENDS=	p5-Regexp-Log>=0:${PORTSDIR}/textproc/p5-Regexp-Log
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
