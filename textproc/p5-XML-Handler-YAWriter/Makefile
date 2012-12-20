# New ports collection makefile for:	XML-Handler-YAWriter
# Date created:	   02 June 2002
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/p5-XML-Handler-YAWriter/Makefile,v 1.10 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Handler-YAWriter
PORTVERSION=	0.23
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Yet another Perl SAX XML Writer

BUILD_DEPENDS=	p5-libxml>=0:${PORTSDIR}/textproc/p5-libxml
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		xmlpretty.1
MAN3=		XML::Handler::YAWriter.3

.include <bsd.port.mk>
