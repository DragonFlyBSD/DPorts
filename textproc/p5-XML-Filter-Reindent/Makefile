# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Filter-Reindent/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	XML-Filter-Reindent
PORTVERSION=	0.03
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Reformats whitespace for pretty printing XML

BUILD_DEPENDS=	p5-XML-Filter-DetectWS>=0:${PORTSDIR}/textproc/p5-XML-Filter-DetectWS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
