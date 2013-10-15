# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Devel-Diagram/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Devel-Diagram
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Discover the classes of an arbitrary suite of Perl modules

USES=		perl5
USE_PERL5=	configure
USE_DOS2UNIX=	yes

MAN3=		Devel::Diagram.3 Devel::Diagram::Render::UXF20.3

NO_STAGE=	yes
post-install:
.ifndef(NOPORTDOCS)
	@${ECHO_MSG} "===>   Installing examples for ${PKGNAME}"
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/eg/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
