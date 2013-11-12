# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-XML-XPath/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	XML-XPath
PORTVERSION=	1.13
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Modules for parsing and evaluating XPath statements

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
