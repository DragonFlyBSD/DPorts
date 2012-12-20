# New ports collection makefile for:	p5-WWW-Mechanize-DecodedContent
# Date created:		2007-12-28
# Whom:			Masahiro Teramoto <markun@onohara.to>
#
# $FreeBSD: ports/www/p5-WWW-Mechanize-DecodedContent/Makefile,v 1.6 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-Mechanize-DecodedContent
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIYAGAWA
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Decode Mech content using its HTTP response encoding

BUILD_DEPENDS=	p5-WWW-Mechanize>=0:${PORTSDIR}/www/p5-WWW-Mechanize \
		p5-HTTP-Response-Encoding>=0:${PORTSDIR}/www/p5-HTTP-Response-Encoding
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		WWW::Mechanize::DecodedContent.3

.include <bsd.port.mk>
