# New ports collection makefile for:	Devel-Diagram
# Date created:	   25 January 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-Devel-Diagram/Makefile,v 1.4 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	Devel-Diagram
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Discover the classes of an arbitrary suite of Perl modules

PERL_CONFIGURE=	yes

MAN3=		Devel::Diagram.3 Devel::Diagram::Render::UXF20.3

post-patch:
	@${FIND} ${WRKSRC} -type f | ${XARGS} ${PERL} -pi -e 's/\x0d(?=\x0a)//'

post-install:
.ifndef(NOPORTDOCS)
	@${ECHO_MSG} "===>   Installing examples for ${PKGNAME}"
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/eg/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
