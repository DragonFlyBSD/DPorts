USES=		nodejs:20,run

MASTERDIR=	${.CURDIR}/../yarn-node24

post-patch:
	@${RM} ${WRKSRC}/bin/*.cmd
	@${REINPLACE_CMD} -i '' \
		-e 's|"installationMethod": "tar"|"installationMethod": "pkg"|g' \
		${WRKSRC}/package.json
	@${REINPLACE_CMD} -i '' -e 's%Linux)%Linux|FreeBSD|DragonFly)%g' \
		${WRKSRC}/bin/yarn

.include "${MASTERDIR}/Makefile"
