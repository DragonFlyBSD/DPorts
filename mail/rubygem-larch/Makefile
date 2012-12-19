# Ports collection makefile for:	rubygem-larch
# Date created:				28 June 2011
# Whom:					Eric Freeman <freebsdports@chillibear.com>
#
# $FreeBSD: ports/mail/rubygem-larch/Makefile,v 1.2 2012/11/17 05:59:14 svnexp Exp $
#

PORTNAME=	larch
PORTVERSION=	1.1.1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	freebsdports@chillibear.com
COMMENT=	Larch copies messages from one IMAP server to another

RUN_DEPENDS=	rubygem-amalgalite>=1.0:${PORTSDIR}/databases/rubygem-amalgalite \
		rubygem-highline>=1.5:${PORTSDIR}/devel/rubygem-highline \
		rubygem-sequel>=3.14:${PORTSDIR}/devel/rubygem-sequel \
		rubygem-trollop>=1.13:${PORTSDIR}/devel/rubygem-trollop

PLIST_FILES=	bin/larch

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
