# ex:ts=8
# Ports collection makefile for:	HTML::Encoding
# Date created:			Jun 5, 2006
# Whom:				ijliao
#
# $FreeBSD: ports/www/p5-HTML-Encoding/Makefile,v 1.10 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-Encoding
PORTVERSION=	0.61
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Determine the encoding of HTML/XML/XHTML documents

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	HTML::Encoding.3

.include <bsd.port.mk>
