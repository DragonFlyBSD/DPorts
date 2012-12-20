# New ports collection makefile for:	p5-DateTime-Set
# Date created:	   26 june 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Set/Makefile,v 1.29 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	DateTime-Set
PORTVERSION=	0.31
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Datetime sets and set math

BUILD_DEPENDS=	p5-DateTime>=0.12:${PORTSDIR}/devel/p5-DateTime \
		p5-Set-Infinite>=0.59:${PORTSDIR}/devel/p5-Set-Infinite
RUN_DEPENDS=	p5-DateTime>=0.12:${PORTSDIR}/devel/p5-DateTime \
		p5-Set-Infinite>=0.59:${PORTSDIR}/devel/p5-Set-Infinite

PERL_CONFIGURE=	yes

MAN3=		DateTime::Set.3 \
		DateTime::Span.3 \
		DateTime::SpanSet.3 \
		Set::Infinite::_recurrence.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README TODO

post-install:
	${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
	${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
