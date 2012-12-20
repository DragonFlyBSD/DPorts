# New ports collection makefile for:	www/p5-HTML-TagCloud-Extended
# Date created:				07 October 2005
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTML-TagCloud-Extended/Makefile,v 1.8 2012/11/17 06:02:50 svnexp Exp $
#

PORTNAME=	HTML-TagCloud-Extended
PORTVERSION=	0.10
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTML::TagCloud extension for time-stamp based coloring of tags

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-Class-Data-Inheritable>=0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-Readonly>=0:${PORTSDIR}/devel/p5-Readonly
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	HTML::TagCloud::Extended.3

.include <bsd.port.mk>
