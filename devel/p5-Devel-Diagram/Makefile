# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Devel-Diagram/Makefile 334223 2013-11-18 16:45:09Z mat $

PORTNAME=	Devel-Diagram
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Discover the classes of an arbitrary suite of Perl modules

USES=		perl5 dos2unix
USE_PERL5=	configure

post-install:
.ifndef(NOPORTDOCS)
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/eg/* ${STAGEDIR}${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
