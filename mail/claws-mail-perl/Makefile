# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: mail/claws-mail-perl/Makefile 325602 2013-08-29 15:01:46Z pawel $

PORTNAME=	perl
PORTREVISION=	0

COMMENT=	Perl filtering plugin for Claws Mail

USES+=		perl5

PLIST_FILES+=	share/claws-mail/matcherrc2perlfilter.pl

CLAWS_PLUGINS_BUILD=	perl

post-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/src/plugins/perl/tools/matcherrc2perlfilter.pl \
		${PREFIX}/share/claws-mail/

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
