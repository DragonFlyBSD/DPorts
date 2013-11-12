# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-XML-Handler-YAWriter/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	XML-Handler-YAWriter
PORTVERSION=	0.23
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Yet another Perl SAX XML Writer

BUILD_DEPENDS=	p5-libxml>=0:${PORTSDIR}/textproc/p5-libxml
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
