# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: math/p5-Math-Bezier-Convert/Makefile 332813 2013-11-05 06:56:18Z vanilla $

PORTNAME=	Math-Bezier-Convert
PORTVERSION=	0.02
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert cubic and quadratic Bezier each other

USES=		perl5
USE_PERL5=	configure
USE_DOS2UNIX=	yes

post-configure:
	@${PERL} -pi -e 's/^(POD2MAN_EXE.*)$$/\1 --lax/;' ${WRKSRC}/Makefile

.include <bsd.port.mk>
