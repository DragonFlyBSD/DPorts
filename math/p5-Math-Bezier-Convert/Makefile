# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: math/p5-Math-Bezier-Convert/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		Math::Bezier::Convert.3

post-configure:
	@${PERL} -pi -e 's/^(POD2MAN_EXE.*)$$/\1 --lax/;' ${WRKSRC}/Makefile

.include <bsd.port.mk>
