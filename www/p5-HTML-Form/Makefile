# New ports collection makefile for:	p5-HTML-Form
# Date created:				2011-04-18
# Whom:					Frederic Culot <culot@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTML-Form/Makefile,v 1.6 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-Form
PORTVERSION=	6.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Class that represents an HTML form element

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-HTTP-Message>=6.03:${PORTSDIR}/www/p5-HTTP-Message \
		p5-URI>=1.10:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

CONFLICTS=	p5-libwww-5*

PERL_CONFIGURE=	yes

MAN3=		HTML::Form.3

.include <bsd.port.mk>
