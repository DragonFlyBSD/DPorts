# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-vCard/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=		Text-vCard
PORTVERSION=		2.13
CATEGORIES=		textproc perl5
MASTER_SITES=		CPAN
PKGNAMEPREFIX=		p5-

MAINTAINER=		ehaupt@FreeBSD.org
COMMENT=		Package to parse, edit and create multiple vCards (RFC 2426)

BUILD_DEPENDS=		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp \
			p5-Text-vFile-asData>=0:${PORTSDIR}/devel/p5-Text-vFile-asData
RUN_DEPENDS:=		${BUILD_DEPENDS}

PERL_CONFIGURE=		yes

MAN3=			Text::vCard::Node.3 Text::vCard.3 \
			Text::vCard::Addressbook.3

.include <bsd.port.mk>
