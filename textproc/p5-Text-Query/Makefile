# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: textproc/p5-Text-Query/Makefile 340915 2014-01-24 15:52:12Z mat $

PORTNAME=	Text-Query
PORTVERSION=	0.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Query processing framework

USES=		perl5
USE_PERL5=	configure patch

pre-patch:
	@${PERL} -pi -e 's/factor\(\$$self\)/\&factor(\$$self)/' \
		${WRKSRC}/lib/Text/Query/ParseAdvanced.pm

.include <bsd.port.mk>
