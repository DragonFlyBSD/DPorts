# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Filter-BufferText/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	XML-Filter-BufferText
PORTVERSION=	1.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Filter to put all characters() in one event

BUILD_DEPENDS=	p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
