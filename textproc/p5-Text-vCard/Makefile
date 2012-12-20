# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: ports/textproc/p5-Text-vCard/Makefile,v 1.22 2012/11/17 06:02:10 svnexp Exp $

PORTNAME=		Text-vCard
PORTVERSION=		2.12
CATEGORIES=		textproc perl5
MASTER_SITES=		CPAN
PKGNAMEPREFIX=		p5-

MAINTAINER=		ehaupt@FreeBSD.org
COMMENT=		A package to parse, edit and create multiple vCards (RFC 2426)

BUILD_DEPENDS=		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp \
			p5-Text-vFile-asData>=0:${PORTSDIR}/devel/p5-Text-vFile-asData
RUN_DEPENDS:=		${BUILD_DEPENDS}

PERL_CONFIGURE=		yes
MAKE_JOBS_SAFE=		yes

MAN3=			Text::vCard::Node.3 Text::vCard.3 \
			Text::vCard::Addressbook.3

.include <bsd.port.mk>
